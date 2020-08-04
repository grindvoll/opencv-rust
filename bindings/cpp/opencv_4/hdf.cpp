#include "ocvrs_common.hpp"
#include <opencv2/hdf.hpp>
#include "hdf_types.hpp"

extern "C" {
	Result<cv::Ptr<cv::hdf::HDF5>*> cv_hdf_open_const_StringR(const char* HDF5Filename) {
		try {
			cv::Ptr<cv::hdf::HDF5> ret = cv::hdf::open(std::string(HDF5Filename));
			return Ok(new cv::Ptr<cv::hdf::HDF5>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::hdf::HDF5>*>))
	}
	
	Result_void cv_hdf_HDF5_close(cv::hdf::HDF5* instance) {
		try {
			instance->close();
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_grcreate_const_StringR(cv::hdf::HDF5* instance, const char* grlabel) {
		try {
			instance->grcreate(std::string(grlabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<bool> cv_hdf_HDF5_hlexists_const_const_StringR(const cv::hdf::HDF5* instance, const char* label) {
		try {
			bool ret = instance->hlexists(std::string(label));
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result<bool> cv_hdf_HDF5_atexists_const_const_StringR(const cv::hdf::HDF5* instance, const char* atlabel) {
		try {
			bool ret = instance->atexists(std::string(atlabel));
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result_void cv_hdf_HDF5_atdelete_const_StringR(cv::hdf::HDF5* instance, const char* atlabel) {
		try {
			instance->atdelete(std::string(atlabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_atwrite_const_int_const_StringR(cv::hdf::HDF5* instance, const int value, const char* atlabel) {
		try {
			instance->atwrite(value, std::string(atlabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_atread_intX_const_StringR(cv::hdf::HDF5* instance, int* value, const char* atlabel) {
		try {
			instance->atread(value, std::string(atlabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_atwrite_const_double_const_StringR(cv::hdf::HDF5* instance, const double value, const char* atlabel) {
		try {
			instance->atwrite(value, std::string(atlabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_atread_doubleX_const_StringR(cv::hdf::HDF5* instance, double* value, const char* atlabel) {
		try {
			instance->atread(value, std::string(atlabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_atwrite_const_StringR_const_StringR(cv::hdf::HDF5* instance, const char* value, const char* atlabel) {
		try {
			instance->atwrite(std::string(value), std::string(atlabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_atread_StringX_const_StringR(cv::hdf::HDF5* instance, void** value, const char* atlabel) {
		try {
			std::string value_out;
			instance->atread(&value_out, std::string(atlabel));
			*value = ocvrs_create_string(value_out.c_str());
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_atwrite_const__InputArrayR_const_StringR(cv::hdf::HDF5* instance, const cv::_InputArray* value, const char* atlabel) {
		try {
			instance->atwrite(*value, std::string(atlabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_atread_const__OutputArrayR_const_StringR(cv::hdf::HDF5* instance, const cv::_OutputArray* value, const char* atlabel) {
		try {
			instance->atread(*value, std::string(atlabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dscreate_const_const_int_const_int_const_int_const_StringR(const cv::hdf::HDF5* instance, const int rows, const int cols, const int type, const char* dslabel) {
		try {
			instance->dscreate(rows, cols, type, std::string(dslabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dscreate_const_const_int_const_int_const_int_const_StringR_const_int(const cv::hdf::HDF5* instance, const int rows, const int cols, const int type, const char* dslabel, const int compresslevel) {
		try {
			instance->dscreate(rows, cols, type, std::string(dslabel), compresslevel);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dscreate_const_const_int_const_int_const_int_const_StringR_const_int_const_vector_int_R(const cv::hdf::HDF5* instance, const int rows, const int cols, const int type, const char* dslabel, const int compresslevel, const std::vector<int>* dims_chunks) {
		try {
			instance->dscreate(rows, cols, type, std::string(dslabel), compresslevel, *dims_chunks);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dscreate_const_const_int_const_int_const_int_const_StringR_const_int_const_intX(const cv::hdf::HDF5* instance, const int rows, const int cols, const int type, const char* dslabel, const int compresslevel, const int* dims_chunks) {
		try {
			instance->dscreate(rows, cols, type, std::string(dslabel), compresslevel, dims_chunks);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dscreate_const_const_int_const_intX_const_int_const_StringR(const cv::hdf::HDF5* instance, const int n_dims, const int* sizes, const int type, const char* dslabel) {
		try {
			instance->dscreate(n_dims, sizes, type, std::string(dslabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dscreate_const_const_int_const_intX_const_int_const_StringR_const_int(const cv::hdf::HDF5* instance, const int n_dims, const int* sizes, const int type, const char* dslabel, const int compresslevel) {
		try {
			instance->dscreate(n_dims, sizes, type, std::string(dslabel), compresslevel);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dscreate_const_const_vector_int_R_const_int_const_StringR_const_int_const_vector_int_R(const cv::hdf::HDF5* instance, const std::vector<int>* sizes, const int type, const char* dslabel, const int compresslevel, const std::vector<int>* dims_chunks) {
		try {
			instance->dscreate(*sizes, type, std::string(dslabel), compresslevel, *dims_chunks);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dscreate_const_const_int_const_intX_const_int_const_StringR_const_int_const_intX(const cv::hdf::HDF5* instance, const int n_dims, const int* sizes, const int type, const char* dslabel, const int compresslevel, const int* dims_chunks) {
		try {
			instance->dscreate(n_dims, sizes, type, std::string(dslabel), compresslevel, dims_chunks);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<std::vector<int>*> cv_hdf_HDF5_dsgetsize_const_const_StringR_int(const cv::hdf::HDF5* instance, const char* dslabel, int dims_flag) {
		try {
			std::vector<int> ret = instance->dsgetsize(std::string(dslabel), dims_flag);
			return Ok(new std::vector<int>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<std::vector<int>*>))
	}
	
	Result<int> cv_hdf_HDF5_dsgettype_const_const_StringR(const cv::hdf::HDF5* instance, const char* dslabel) {
		try {
			int ret = instance->dsgettype(std::string(dslabel));
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result_void cv_hdf_HDF5_dswrite_const_const__InputArrayR_const_StringR(const cv::hdf::HDF5* instance, const cv::_InputArray* Array, const char* dslabel) {
		try {
			instance->dswrite(*Array, std::string(dslabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dswrite_const_const__InputArrayR_const_StringR_const_intX(const cv::hdf::HDF5* instance, const cv::_InputArray* Array, const char* dslabel, const int* dims_offset) {
		try {
			instance->dswrite(*Array, std::string(dslabel), dims_offset);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dswrite_const_const__InputArrayR_const_StringR_const_vector_int_R_const_vector_int_R(const cv::hdf::HDF5* instance, const cv::_InputArray* Array, const char* dslabel, const std::vector<int>* dims_offset, const std::vector<int>* dims_counts) {
		try {
			instance->dswrite(*Array, std::string(dslabel), *dims_offset, *dims_counts);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dswrite_const_const__InputArrayR_const_StringR_const_intX_const_intX(const cv::hdf::HDF5* instance, const cv::_InputArray* Array, const char* dslabel, const int* dims_offset, const int* dims_counts) {
		try {
			instance->dswrite(*Array, std::string(dslabel), dims_offset, dims_counts);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dsinsert_const_const__InputArrayR_const_StringR(const cv::hdf::HDF5* instance, const cv::_InputArray* Array, const char* dslabel) {
		try {
			instance->dsinsert(*Array, std::string(dslabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dsinsert_const_const__InputArrayR_const_StringR_const_intX(const cv::hdf::HDF5* instance, const cv::_InputArray* Array, const char* dslabel, const int* dims_offset) {
		try {
			instance->dsinsert(*Array, std::string(dslabel), dims_offset);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dsinsert_const_const__InputArrayR_const_StringR_const_vector_int_R_const_vector_int_R(const cv::hdf::HDF5* instance, const cv::_InputArray* Array, const char* dslabel, const std::vector<int>* dims_offset, const std::vector<int>* dims_counts) {
		try {
			instance->dsinsert(*Array, std::string(dslabel), *dims_offset, *dims_counts);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dsinsert_const_const__InputArrayR_const_StringR_const_intX_const_intX(const cv::hdf::HDF5* instance, const cv::_InputArray* Array, const char* dslabel, const int* dims_offset, const int* dims_counts) {
		try {
			instance->dsinsert(*Array, std::string(dslabel), dims_offset, dims_counts);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dsread_const_const__OutputArrayR_const_StringR(const cv::hdf::HDF5* instance, const cv::_OutputArray* Array, const char* dslabel) {
		try {
			instance->dsread(*Array, std::string(dslabel));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dsread_const_const__OutputArrayR_const_StringR_const_intX(const cv::hdf::HDF5* instance, const cv::_OutputArray* Array, const char* dslabel, const int* dims_offset) {
		try {
			instance->dsread(*Array, std::string(dslabel), dims_offset);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dsread_const_const__OutputArrayR_const_StringR_const_vector_int_R_const_vector_int_R(const cv::hdf::HDF5* instance, const cv::_OutputArray* Array, const char* dslabel, const std::vector<int>* dims_offset, const std::vector<int>* dims_counts) {
		try {
			instance->dsread(*Array, std::string(dslabel), *dims_offset, *dims_counts);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_dsread_const_const__OutputArrayR_const_StringR_const_intX_const_intX(const cv::hdf::HDF5* instance, const cv::_OutputArray* Array, const char* dslabel, const int* dims_offset, const int* dims_counts) {
		try {
			instance->dsread(*Array, std::string(dslabel), dims_offset, dims_counts);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<int> cv_hdf_HDF5_kpgetsize_const_const_StringR_int(const cv::hdf::HDF5* instance, const char* kplabel, int dims_flag) {
		try {
			int ret = instance->kpgetsize(std::string(kplabel), dims_flag);
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result_void cv_hdf_HDF5_kpcreate_const_const_int_const_StringR_const_int_const_int(const cv::hdf::HDF5* instance, const int size, const char* kplabel, const int compresslevel, const int chunks) {
		try {
			instance->kpcreate(size, std::string(kplabel), compresslevel, chunks);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_kpwrite_const_const_vector_KeyPoint__const_StringR_const_int_const_int(const cv::hdf::HDF5* instance, const std::vector<cv::KeyPoint>* keypoints, const char* kplabel, const int offset, const int counts) {
		try {
			instance->kpwrite(*keypoints, std::string(kplabel), offset, counts);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_kpinsert_const_const_vector_KeyPoint__const_StringR_const_int_const_int(const cv::hdf::HDF5* instance, const std::vector<cv::KeyPoint>* keypoints, const char* kplabel, const int offset, const int counts) {
		try {
			instance->kpinsert(*keypoints, std::string(kplabel), offset, counts);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_hdf_HDF5_kpread_const_vector_KeyPoint_R_const_StringR_const_int_const_int(const cv::hdf::HDF5* instance, std::vector<cv::KeyPoint>* keypoints, const char* kplabel, const int offset, const int counts) {
		try {
			instance->kpread(*keypoints, std::string(kplabel), offset, counts);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
}
