//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (GEOExtras)
+ (id)_geo_withXPCData:(id)arg1;	// IMP=0x00000000009e49f0
+ (id)_geo_dataForHexString:(id)arg1;	// IMP=0x00000000011b85cb
+ (id)dataWithCPPData:(const void *)arg1 copy:(_Bool)arg2;	// IMP=0x0000000001237561
- (id)_GEOCreateDispatchData;	// IMP=0x00000000002dd813
- (id)_geo_newXPCData;	// IMP=0x00000000009e4adb
- (id)_geo_decompressedDataViaAlgo:(int)arg1;	// IMP=0x0000000000a3969f
- (id)_geo_compressedDataViaAlgo:(int)arg1;	// IMP=0x0000000000a394e7
- (id)_geo_hexString;	// IMP=0x00000000011b8759
- (id)_geo_SHA256Hash;	// IMP=0x00000000011b852b
- (id)_geo_SHA1Hash;	// IMP=0x00000000011b848b
- (id)_geo_MD5Hash;	// IMP=0x00000000011b83e7
- (basic_string_5886a005)cppData;	// IMP=0x00000000012376a1
- (id)initWithCPPData:(const void *)arg1 copy:(_Bool)arg2;	// IMP=0x000000000123759c
@end
