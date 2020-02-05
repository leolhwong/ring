; Copyright (c) 2018, Google Inc.
;
; Permission to use, copy, modify, and/or distribute this software for any
; purpose with or without fee is hereby granted, provided that the above
; copyright notice and this permission notice appear in all copies.
;
; THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
; WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
; MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
; SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
; WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
; OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
; CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

; 32-bit Windows adds underscores to C functions, while 64-bit Windows does not.
%ifidn __OUTPUT_FORMAT__, win32
%xdefine _GFp_ChaCha20_ctr32 _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_ChaCha20_ctr32
%xdefine _GFp_aes_hw_ctr32_encrypt_blocks _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_aes_hw_ctr32_encrypt_blocks
%xdefine _GFp_aes_hw_encrypt _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_aes_hw_encrypt
%xdefine _GFp_aes_hw_set_encrypt_key _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_aes_hw_set_encrypt_key
%xdefine _GFp_aes_nohw_encrypt _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_aes_nohw_encrypt
%xdefine _GFp_aes_nohw_set_encrypt_key _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_aes_nohw_set_encrypt_key
%xdefine _GFp_aesni_gcm_decrypt _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_aesni_gcm_decrypt
%xdefine _GFp_aesni_gcm_encrypt _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_aesni_gcm_encrypt
%xdefine _GFp_bn_from_montgomery _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_bn_from_montgomery
%xdefine _GFp_bn_from_montgomery_in_place _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_bn_from_montgomery_in_place
%xdefine _GFp_bn_gather5 _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_bn_gather5
%xdefine _GFp_bn_mul_add_words _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_bn_mul_add_words
%xdefine _GFp_bn_mul_mont _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_bn_mul_mont
%xdefine _GFp_bn_mul_mont_gather5 _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_bn_mul_mont_gather5
%xdefine _GFp_bn_neg_inv_mod_r_u64 _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_bn_neg_inv_mod_r_u64
%xdefine _GFp_bn_power5 _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_bn_power5
%xdefine _GFp_bn_scatter5 _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_bn_scatter5
%xdefine _GFp_bn_sqr8x_internal _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_bn_sqr8x_internal
%xdefine _GFp_bn_sqrx8x_internal _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_bn_sqrx8x_internal
%xdefine _GFp_cpuid_setup _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_cpuid_setup
%xdefine _GFp_gcm_ghash_4bit _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_ghash_4bit
%xdefine _GFp_gcm_ghash_avx _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_ghash_avx
%xdefine _GFp_gcm_ghash_clmul _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_ghash_clmul
%xdefine _GFp_gcm_gmult_4bit _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_gmult_4bit
%xdefine _GFp_gcm_gmult_clmul _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_gmult_clmul
%xdefine _GFp_gcm_init_4bit _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_init_4bit
%xdefine _GFp_gcm_init_avx _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_init_avx
%xdefine _GFp_gcm_init_clmul _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_init_clmul
%xdefine _GFp_ia32cap_P _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_ia32cap_P
%xdefine _GFp_memcmp _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_memcmp
%xdefine _GFp_nistz256_add _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_add
%xdefine _GFp_nistz256_avx2_select_w7 _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_avx2_select_w7
%xdefine _GFp_nistz256_mul_mont _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_mul_mont
%xdefine _GFp_nistz256_neg _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_neg
%xdefine _GFp_nistz256_point_add _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_point_add
%xdefine _GFp_nistz256_point_add_affine _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_point_add_affine
%xdefine _GFp_nistz256_point_double _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_point_double
%xdefine _GFp_nistz256_point_mul _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_point_mul
%xdefine _GFp_nistz256_point_mul_base _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_point_mul_base
%xdefine _GFp_nistz256_select_w5 _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_select_w5
%xdefine _GFp_nistz256_select_w7 _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_select_w7
%xdefine _GFp_nistz256_sqr_mont _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_sqr_mont
%xdefine _GFp_nistz384_point_add _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz384_point_add
%xdefine _GFp_nistz384_point_double _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz384_point_double
%xdefine _GFp_nistz384_point_mul _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_nistz384_point_mul
%xdefine _GFp_p256_scalar_mul_mont _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_p256_scalar_mul_mont
%xdefine _GFp_p256_scalar_sqr_mont _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_p256_scalar_sqr_mont
%xdefine _GFp_p256_scalar_sqr_rep_mont _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_p256_scalar_sqr_rep_mont
%xdefine _GFp_p384_elem_add _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_p384_elem_add
%xdefine _GFp_p384_elem_div_by_2 _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_p384_elem_div_by_2
%xdefine _GFp_p384_elem_mul_mont _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_p384_elem_mul_mont
%xdefine _GFp_p384_elem_neg _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_p384_elem_neg
%xdefine _GFp_p384_elem_sub _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_p384_elem_sub
%xdefine _GFp_p384_scalar_mul_mont _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_p384_scalar_mul_mont
%xdefine _GFp_poly1305_blocks _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_poly1305_blocks
%xdefine _GFp_poly1305_emit _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_poly1305_emit
%xdefine _GFp_poly1305_init_asm _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_poly1305_init_asm
%xdefine _GFp_sha256_block_data_order _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_sha256_block_data_order
%xdefine _GFp_sha512_block_data_order _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_sha512_block_data_order
%xdefine _GFp_vpaes_encrypt _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_vpaes_encrypt
%xdefine _GFp_vpaes_set_encrypt_key _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_vpaes_set_encrypt_key
%xdefine _GFp_x25519_fe_invert _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_fe_invert
%xdefine _GFp_x25519_fe_isnegative _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_fe_isnegative
%xdefine _GFp_x25519_fe_mul_ttt _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_fe_mul_ttt
%xdefine _GFp_x25519_fe_neg _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_fe_neg
%xdefine _GFp_x25519_fe_tobytes _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_fe_tobytes
%xdefine _GFp_x25519_ge_double_scalarmult_vartime _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_ge_double_scalarmult_vartime
%xdefine _GFp_x25519_ge_frombytes_vartime _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_ge_frombytes_vartime
%xdefine _GFp_x25519_ge_scalarmult_base _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_ge_scalarmult_base
%xdefine _GFp_x25519_public_from_private_generic_masked _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_public_from_private_generic_masked
%xdefine _GFp_x25519_sc_mask _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_sc_mask
%xdefine _GFp_x25519_sc_muladd _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_sc_muladd
%xdefine _GFp_x25519_sc_reduce _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_sc_reduce
%xdefine _GFp_x25519_scalar_mult_generic_masked _ %+ VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_scalar_mult_generic_masked
%xdefine _LIMBS_add_mod _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_add_mod
%xdefine _LIMBS_are_even _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_are_even
%xdefine _LIMBS_are_zero _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_are_zero
%xdefine _LIMBS_copy _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_copy
%xdefine _LIMBS_equal _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_equal
%xdefine _LIMBS_equal_limb _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_equal_limb
%xdefine _LIMBS_less_than _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_less_than
%xdefine _LIMBS_less_than_limb _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_less_than_limb
%xdefine _LIMBS_reduce_once _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_reduce_once
%xdefine _LIMBS_select_512_32 _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_select_512_32
%xdefine _LIMBS_shl_mod _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_shl_mod
%xdefine _LIMBS_sub_mod _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_sub_mod
%xdefine _LIMBS_window5_split_window _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_window5_split_window
%xdefine _LIMBS_window5_unsplit_window _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMBS_window5_unsplit_window
%xdefine _LIMB_shr _ %+ VERSIONED_EXTERN_PREFIX %+ _LIMB_shr
%xdefine _gfp_little_endian_bytes_from_scalar _ %+ VERSIONED_EXTERN_PREFIX %+ _gfp_little_endian_bytes_from_scalar
%else
%xdefine GFp_ChaCha20_ctr32 VERSIONED_EXTERN_PREFIX %+ _GFp_ChaCha20_ctr32
%xdefine GFp_aes_hw_ctr32_encrypt_blocks VERSIONED_EXTERN_PREFIX %+ _GFp_aes_hw_ctr32_encrypt_blocks
%xdefine GFp_aes_hw_encrypt VERSIONED_EXTERN_PREFIX %+ _GFp_aes_hw_encrypt
%xdefine GFp_aes_hw_set_encrypt_key VERSIONED_EXTERN_PREFIX %+ _GFp_aes_hw_set_encrypt_key
%xdefine GFp_aes_nohw_encrypt VERSIONED_EXTERN_PREFIX %+ _GFp_aes_nohw_encrypt
%xdefine GFp_aes_nohw_set_encrypt_key VERSIONED_EXTERN_PREFIX %+ _GFp_aes_nohw_set_encrypt_key
%xdefine GFp_aesni_gcm_decrypt VERSIONED_EXTERN_PREFIX %+ _GFp_aesni_gcm_decrypt
%xdefine GFp_aesni_gcm_encrypt VERSIONED_EXTERN_PREFIX %+ _GFp_aesni_gcm_encrypt
%xdefine GFp_bn_from_montgomery VERSIONED_EXTERN_PREFIX %+ _GFp_bn_from_montgomery
%xdefine GFp_bn_from_montgomery_in_place VERSIONED_EXTERN_PREFIX %+ _GFp_bn_from_montgomery_in_place
%xdefine GFp_bn_gather5 VERSIONED_EXTERN_PREFIX %+ _GFp_bn_gather5
%xdefine GFp_bn_mul_add_words VERSIONED_EXTERN_PREFIX %+ _GFp_bn_mul_add_words
%xdefine GFp_bn_mul_mont VERSIONED_EXTERN_PREFIX %+ _GFp_bn_mul_mont
%xdefine GFp_bn_mul_mont_gather5 VERSIONED_EXTERN_PREFIX %+ _GFp_bn_mul_mont_gather5
%xdefine GFp_bn_neg_inv_mod_r_u64 VERSIONED_EXTERN_PREFIX %+ _GFp_bn_neg_inv_mod_r_u64
%xdefine GFp_bn_power5 VERSIONED_EXTERN_PREFIX %+ _GFp_bn_power5
%xdefine GFp_bn_scatter5 VERSIONED_EXTERN_PREFIX %+ _GFp_bn_scatter5
%xdefine GFp_bn_sqr8x_internal VERSIONED_EXTERN_PREFIX %+ _GFp_bn_sqr8x_internal
%xdefine GFp_bn_sqrx8x_internal VERSIONED_EXTERN_PREFIX %+ _GFp_bn_sqrx8x_internal
%xdefine GFp_cpuid_setup VERSIONED_EXTERN_PREFIX %+ _GFp_cpuid_setup
%xdefine GFp_gcm_ghash_4bit VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_ghash_4bit
%xdefine GFp_gcm_ghash_avx VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_ghash_avx
%xdefine GFp_gcm_ghash_clmul VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_ghash_clmul
%xdefine GFp_gcm_gmult_4bit VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_gmult_4bit
%xdefine GFp_gcm_gmult_clmul VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_gmult_clmul
%xdefine GFp_gcm_init_4bit VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_init_4bit
%xdefine GFp_gcm_init_avx VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_init_avx
%xdefine GFp_gcm_init_clmul VERSIONED_EXTERN_PREFIX %+ _GFp_gcm_init_clmul
%xdefine GFp_ia32cap_P VERSIONED_EXTERN_PREFIX %+ _GFp_ia32cap_P
%xdefine GFp_memcmp VERSIONED_EXTERN_PREFIX %+ _GFp_memcmp
%xdefine GFp_nistz256_add VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_add
%xdefine GFp_nistz256_avx2_select_w7 VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_avx2_select_w7
%xdefine GFp_nistz256_mul_mont VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_mul_mont
%xdefine GFp_nistz256_neg VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_neg
%xdefine GFp_nistz256_point_add VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_point_add
%xdefine GFp_nistz256_point_add_affine VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_point_add_affine
%xdefine GFp_nistz256_point_double VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_point_double
%xdefine GFp_nistz256_point_mul VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_point_mul
%xdefine GFp_nistz256_point_mul_base VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_point_mul_base
%xdefine GFp_nistz256_select_w5 VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_select_w5
%xdefine GFp_nistz256_select_w7 VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_select_w7
%xdefine GFp_nistz256_sqr_mont VERSIONED_EXTERN_PREFIX %+ _GFp_nistz256_sqr_mont
%xdefine GFp_nistz384_point_add VERSIONED_EXTERN_PREFIX %+ _GFp_nistz384_point_add
%xdefine GFp_nistz384_point_double VERSIONED_EXTERN_PREFIX %+ _GFp_nistz384_point_double
%xdefine GFp_nistz384_point_mul VERSIONED_EXTERN_PREFIX %+ _GFp_nistz384_point_mul
%xdefine GFp_p256_scalar_mul_mont VERSIONED_EXTERN_PREFIX %+ _GFp_p256_scalar_mul_mont
%xdefine GFp_p256_scalar_sqr_mont VERSIONED_EXTERN_PREFIX %+ _GFp_p256_scalar_sqr_mont
%xdefine GFp_p256_scalar_sqr_rep_mont VERSIONED_EXTERN_PREFIX %+ _GFp_p256_scalar_sqr_rep_mont
%xdefine GFp_p384_elem_add VERSIONED_EXTERN_PREFIX %+ _GFp_p384_elem_add
%xdefine GFp_p384_elem_div_by_2 VERSIONED_EXTERN_PREFIX %+ _GFp_p384_elem_div_by_2
%xdefine GFp_p384_elem_mul_mont VERSIONED_EXTERN_PREFIX %+ _GFp_p384_elem_mul_mont
%xdefine GFp_p384_elem_neg VERSIONED_EXTERN_PREFIX %+ _GFp_p384_elem_neg
%xdefine GFp_p384_elem_sub VERSIONED_EXTERN_PREFIX %+ _GFp_p384_elem_sub
%xdefine GFp_p384_scalar_mul_mont VERSIONED_EXTERN_PREFIX %+ _GFp_p384_scalar_mul_mont
%xdefine GFp_poly1305_blocks VERSIONED_EXTERN_PREFIX %+ _GFp_poly1305_blocks
%xdefine GFp_poly1305_emit VERSIONED_EXTERN_PREFIX %+ _GFp_poly1305_emit
%xdefine GFp_poly1305_init_asm VERSIONED_EXTERN_PREFIX %+ _GFp_poly1305_init_asm
%xdefine GFp_sha256_block_data_order VERSIONED_EXTERN_PREFIX %+ _GFp_sha256_block_data_order
%xdefine GFp_sha512_block_data_order VERSIONED_EXTERN_PREFIX %+ _GFp_sha512_block_data_order
%xdefine GFp_vpaes_encrypt VERSIONED_EXTERN_PREFIX %+ _GFp_vpaes_encrypt
%xdefine GFp_vpaes_set_encrypt_key VERSIONED_EXTERN_PREFIX %+ _GFp_vpaes_set_encrypt_key
%xdefine GFp_x25519_fe_invert VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_fe_invert
%xdefine GFp_x25519_fe_isnegative VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_fe_isnegative
%xdefine GFp_x25519_fe_mul_ttt VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_fe_mul_ttt
%xdefine GFp_x25519_fe_neg VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_fe_neg
%xdefine GFp_x25519_fe_tobytes VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_fe_tobytes
%xdefine GFp_x25519_ge_double_scalarmult_vartime VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_ge_double_scalarmult_vartime
%xdefine GFp_x25519_ge_frombytes_vartime VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_ge_frombytes_vartime
%xdefine GFp_x25519_ge_scalarmult_base VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_ge_scalarmult_base
%xdefine GFp_x25519_public_from_private_generic_masked VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_public_from_private_generic_masked
%xdefine GFp_x25519_sc_mask VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_sc_mask
%xdefine GFp_x25519_sc_muladd VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_sc_muladd
%xdefine GFp_x25519_sc_reduce VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_sc_reduce
%xdefine GFp_x25519_scalar_mult_generic_masked VERSIONED_EXTERN_PREFIX %+ _GFp_x25519_scalar_mult_generic_masked
%xdefine LIMBS_add_mod VERSIONED_EXTERN_PREFIX %+ _LIMBS_add_mod
%xdefine LIMBS_are_even VERSIONED_EXTERN_PREFIX %+ _LIMBS_are_even
%xdefine LIMBS_are_zero VERSIONED_EXTERN_PREFIX %+ _LIMBS_are_zero
%xdefine LIMBS_copy VERSIONED_EXTERN_PREFIX %+ _LIMBS_copy
%xdefine LIMBS_equal VERSIONED_EXTERN_PREFIX %+ _LIMBS_equal
%xdefine LIMBS_equal_limb VERSIONED_EXTERN_PREFIX %+ _LIMBS_equal_limb
%xdefine LIMBS_less_than VERSIONED_EXTERN_PREFIX %+ _LIMBS_less_than
%xdefine LIMBS_less_than_limb VERSIONED_EXTERN_PREFIX %+ _LIMBS_less_than_limb
%xdefine LIMBS_reduce_once VERSIONED_EXTERN_PREFIX %+ _LIMBS_reduce_once
%xdefine LIMBS_select_512_32 VERSIONED_EXTERN_PREFIX %+ _LIMBS_select_512_32
%xdefine LIMBS_shl_mod VERSIONED_EXTERN_PREFIX %+ _LIMBS_shl_mod
%xdefine LIMBS_sub_mod VERSIONED_EXTERN_PREFIX %+ _LIMBS_sub_mod
%xdefine LIMBS_window5_split_window VERSIONED_EXTERN_PREFIX %+ _LIMBS_window5_split_window
%xdefine LIMBS_window5_unsplit_window VERSIONED_EXTERN_PREFIX %+ _LIMBS_window5_unsplit_window
%xdefine LIMB_shr VERSIONED_EXTERN_PREFIX %+ _LIMB_shr
%xdefine gfp_little_endian_bytes_from_scalar VERSIONED_EXTERN_PREFIX %+ _gfp_little_endian_bytes_from_scalar
%endif
