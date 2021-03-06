//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/NSSecureCoding-Protocol.h>

@class ECMessageFlagChange, NSArray, NSURL;

@interface EMUndoIndividualAction : NSObject <NSSecureCoding>
{
    long long _actionType;	// 8 = 0x8
    NSArray *_messageDatabaseIDs;	// 16 = 0x10
    ECMessageFlagChange *_flagChange;	// 24 = 0x18
    NSURL *_destinationMailboxURL;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000881e6
- (void).cxx_destruct;	// IMP=0x0000000000088544
@property(retain, nonatomic) NSURL *destinationMailboxURL; // @synthesize destinationMailboxURL=_destinationMailboxURL;
@property(retain, nonatomic) ECMessageFlagChange *flagChange; // @synthesize flagChange=_flagChange;
@property(retain, nonatomic) NSArray *messageDatabaseIDs; // @synthesize messageDatabaseIDs=_messageDatabaseIDs;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000883ac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000881ee

@end

