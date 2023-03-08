#[test]
fn calib3d_init_undistort_rectify_map() {
	// Verify that init_undistort_rectify_map is actually exported
	let _fn_ptr = opencv::calib3d::init_undistort_rectify_map;
}
