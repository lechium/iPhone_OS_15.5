//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/TTModelAttributeComparable-Protocol.h>

@class NSString;

@interface TTREMHashtag : NSObject <TTModelAttributeComparable>
{
    NSString *_objectIdentifier;	// 8 = 0x8
}

+ (_Bool)isHashtag:(id)arg1 equalToModelComparable:(id)arg2;	// IMP=0x00000000000c6450
- (void).cxx_destruct;	// IMP=0x00000000000c6682
@property(copy, nonatomic) NSString *objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c6573
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToModelComparable:(id)arg1;	// IMP=0x00000000000c6510

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
