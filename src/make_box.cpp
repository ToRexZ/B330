#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <turtlesim/TeleportAbsolute.h>
#include <turtlesim/SetPen.h>

int main(int argc, char *argv[])
{
  ros::init(argc, argv, "move_turtlesim");

  float box_size = ros::param::param("~box_size", 9.0);

  ros::NodeHandle nh;

  ros::service::waitForService("/turtle1/teleport_absolute", -1);

  ros::ServiceClient teleport_client = nh.serviceClient<turtlesim::TeleportAbsolute>("/turtle1/teleport_absolute");
  ros::ServiceClient pen_client = nh.serviceClient<turtlesim::SetPen>("/turtle1/set_pen");

  turtlesim::SetPen pen_srv;
  pen_srv.request.off = true;
  pen_client.call(pen_srv);

  turtlesim::TeleportAbsolute srv;

  srv.request.x = 5.5 - box_size / 2;
  srv.request.y = 5.5 - box_size / 2;
  teleport_client.call(srv);

  pen_srv.request.off = false;
  pen_srv.request.width = 10;
  pen_srv.request.r = 130;
  pen_srv.request.g = 130;
  pen_client.call(pen_srv);

  srv.request.x = 5.5 - box_size / 2;
  srv.request.y = 5.5 + box_size / 2;
  teleport_client.call(srv);

  srv.request.x = 5.5 + box_size / 2;
  srv.request.y = 5.5 + box_size / 2;
  teleport_client.call(srv);

  srv.request.x = 5.5 + box_size / 2;
  srv.request.y = 5.5 - box_size / 2;
  teleport_client.call(srv);

  srv.request.x = 5.5 - box_size / 2;
  srv.request.y = 5.5 - box_size / 2;
  teleport_client.call(srv);

  pen_srv.request.off = true;
  pen_client.call(pen_srv);

  srv.request.x = 5.5;
  srv.request.y = 5.5;
  teleport_client.call(srv);

  pen_srv.request.off = false;
  pen_srv.request.width = 4;
  pen_srv.request.r = 10;
  pen_srv.request.g = 130;
  pen_srv.request.b = 200;
  pen_client.call(pen_srv);

  return 0;
}