//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TwoNetsStyleTransfer : NSObject
{
    void *ctx;	// 8 = 0x8
    void *plan;	// 16 = 0x10
    CDStruct_2bc666a5 net;	// 24 = 0x18
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> output_layer_name;	// 40 = 0x28
    unsigned long long dim_data0[5];	// 64 = 0x40
    unsigned long long dim_data0__small[5];	// 104 = 0x68
    unsigned long long dim_data2[5];	// 144 = 0x90
    unsigned long long dim_data2__small[5];	// 184 = 0xb8
    struct __IOSurface *result;	// 224 = 0xe0
    struct postprocessing_settings_t current_postprocessing_settings;	// 232 = 0xe8
    NSString *currentNetworkPath;	// 408 = 0x198
}

+ (_Bool)supportsANE;	// IMP=0x0000000000292056
- (id).cxx_construct;	// IMP=0x0000000000291f8b
- (void).cxx_destruct;	// IMP=0x0000000000291f2e
- (struct __IOSurface *)executeSyncWithImage:(struct __CVBuffer *)arg1 smallImage:(struct __CVBuffer *)arg2;	// IMP=0x0000000000291b69
- (void)dealloc;	// IMP=0x0000000000291acc
- (int)heightBig;	// IMP=0x0000000000291ac3
- (int)heightSmall;	// IMP=0x0000000000291aba
- (int)widthBig;	// IMP=0x0000000000291ab1
- (int)widthSmall;	// IMP=0x0000000000291aa8
- (int)load:(id)arg1 outputName:(id)arg2;	// IMP=0x00000000002917c5
- (id)init;	// IMP=0x0000000000291713

@end
