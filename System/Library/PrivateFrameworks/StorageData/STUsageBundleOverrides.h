//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface STUsageBundleOverrides : NSObject
{
    _Bool _ignore;	// 8 = 0x8
    NSString *_replaceWithZeroSizeApp;	// 16 = 0x10
}

+ (id)overridesFor:(id)arg1;	// IMP=0x0000000000008ea9
+ (id)overrides;	// IMP=0x0000000000008b2d
- (void).cxx_destruct;	// IMP=0x0000000000008f6e
@property(readonly) NSString *replaceWithZeroSizeApp; // @synthesize replaceWithZeroSizeApp=_replaceWithZeroSizeApp;
@property(readonly) _Bool ignore; // @synthesize ignore=_ignore;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000008a64

@end
