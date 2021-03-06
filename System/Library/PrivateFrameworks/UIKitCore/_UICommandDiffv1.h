//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface _UICommandDiffv1 : NSObject <NSCopying, NSSecureCoding>
{
    NSOrderedSet *_changes;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000001045b95
+ (id)diffWithChanges:(id)arg1;	// IMP=0x0000000001045b4c
- (void).cxx_destruct;	// IMP=0x0000000001045d30
@property(readonly, nonatomic) NSOrderedSet *changes; // @synthesize changes=_changes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000001045d03
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001045cf8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001045c10
- (id)initWithChanges:(id)arg1;	// IMP=0x0000000001045b9d

@end

