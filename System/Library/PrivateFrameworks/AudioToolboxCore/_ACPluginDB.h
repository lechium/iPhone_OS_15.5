//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/NSSecureCoding-Protocol.h>

@class NSData, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _ACPluginDB : NSObject <NSSecureCoding>
{
    NSMutableDictionary *mSearchDirectories;	// 8 = 0x8
    _Bool mDirty;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *mDispatchQueue;	// 24 = 0x18
    struct function<void (AudioComponentVector &, AudioComponentVector &)> mNotificationCallback;	// 32 = 0x20
    function_2e574590 mScanHashCallback;	// 80 = 0x50
    NSData *mCarbonComponentHash;	// 128 = 0x80
}

+ (id)path;	// IMP=0x00000000001c46dc
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c46d4
- (id).cxx_construct;	// IMP=0x00000000001c52b6
- (void).cxx_destruct;	// IMP=0x00000000001c5240
- (void)initialScanDirectory:(id)arg1 priority:(int)arg2 components:(void *)arg3;	// IMP=0x00000000001c4fcd
- (struct AudioComponentVector)postInit:(_Bool)arg1;	// IMP=0x00000000001c4967
- (void)writeIfDirty;	// IMP=0x00000000001c4961
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c48f3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c47ca
- (id)init;	// IMP=0x00000000001c478a

@end
