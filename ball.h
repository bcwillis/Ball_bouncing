#ifndef BALL_H
#define BALL_H


class ball
{
public:
  ball();

private:
  // time
  double _Time;


  //R3 POS:

  double _x_position
  ,      _y_position
  ,      _z_poition
  ;

  // speed:
  double _speed;
  // direction:
  double _ai_dir_norm_x_,
  ,      _bj_dir_norm_y_,
  ,      _ck_dir_norm_z_;

  //  velocity:
  double _dx_dt
  ,      _dy_dt
  ,      _dz_dt
  ;


  // Height:
  /// ASSUMING MANIFOLD IS FLAT WITH CONSERVATIVE GRAVITATIONAL FIELD, (( NEAR 2-sphere manifold Earth ))
  ///                                                                                  ( preferably outside the sphere )

};

#endif // BALL_H
