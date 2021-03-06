//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface AXAppRepresentation : NSObject <NSSecureCoding>
{
    int _pid;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    long long _layoutRole;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005e83b
+ (id)appWithPID:(int)arg1 bundleID:(id)arg2;	// IMP=0x000000000005e63a
- (void).cxx_destruct;	// IMP=0x000000000005eb2e
@property(nonatomic) long long layoutRole; // @synthesize layoutRole=_layoutRole;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) _Bool isLayoutFullscreenModal;
@property(readonly, nonatomic) _Bool isLayoutPrimary;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005e954
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005e843
- (id)description;	// IMP=0x000000000005e706
- (void)_commonInit;	// IMP=0x000000000005e6f2
- (id)init;	// IMP=0x000000000005e6a6

@end

