//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EspressoProfilingLayerSupportInfo : NSObject
{
    _Bool _supported;	// 8 = 0x8
    _Bool _exists;	// 9 = 0x9
    _Bool _has_perf_warning;	// 10 = 0xa
    _Bool _internal_layer;	// 11 = 0xb
    NSArray *_error_public;	// 16 = 0x10
    NSArray *_error_private;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000331215
@property(retain) NSString *type; // @synthesize type=_type;
@property _Bool internal_layer; // @synthesize internal_layer=_internal_layer;
@property _Bool has_perf_warning; // @synthesize has_perf_warning=_has_perf_warning;
@property _Bool exists; // @synthesize exists=_exists;
@property _Bool supported; // @synthesize supported=_supported;
@property(retain) NSArray *error_private; // @synthesize error_private=_error_private;
@property(retain) NSArray *error_public; // @synthesize error_public=_error_public;

@end

