//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSMutableCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface UIUserNotificationCategory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSDictionary *_actionsByContext;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000bc0d69
- (void).cxx_destruct;	// IMP=0x0000000000bc17c7
@property(copy, nonatomic) NSDictionary *actionsByContext; // @synthesize actionsByContext=_actionsByContext;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)_maximumActionsForContext:(unsigned long long)arg1;	// IMP=0x0000000000bc177f
- (id)validatedCategory;	// IMP=0x0000000000bc12a0
- (id)actionsForContext:(unsigned long long)arg1;	// IMP=0x0000000000bc1239
- (id)actions;	// IMP=0x0000000000bc1225
- (id)description;	// IMP=0x0000000000bc11d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bc1131
- (unsigned long long)hash;	// IMP=0x0000000000bc10f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bc10e7
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bc10b4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000bc1046
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000bc0e9e
- (id)initWithIdentifier:(id)arg1 actionsByContext:(id)arg2;	// IMP=0x0000000000bc0da0
- (id)init;	// IMP=0x0000000000bc0d71

@end

