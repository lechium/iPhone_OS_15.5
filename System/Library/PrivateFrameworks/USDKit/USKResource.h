//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface USKResource : NSObject
{
    struct shared_ptr<pxrInternal_v0_20__pxrReserved__usdkit__::ArAsset> _asset;	// 8 = 0x8
    struct shared_ptr<const char> _buffer;	// 24 = 0x18
    long long _length;	// 40 = 0x28
}

+ (id)resourceWithResourcePath:(id)arg1;	// IMP=0x00000000004252fe
+ (id)resourceWithPath:(id)arg1;	// IMP=0x0000000000425213
+ (id)resourceWithUSKScene:(id)arg1 path:(id)arg2;	// IMP=0x0000000000425000
+ (id)resourceWithURL:(id)arg1;	// IMP=0x0000000000424ed8
- (id).cxx_construct;	// IMP=0x00000000004255ce
- (void).cxx_destruct;	// IMP=0x00000000004255aa
- (id)dataNoCopy;	// IMP=0x00000000004254d4
- (void)dealloc;	// IMP=0x0000000000425425

@end

