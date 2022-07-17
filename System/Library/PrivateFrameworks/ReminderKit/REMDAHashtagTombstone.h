//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMDAChangedIdentifierResult-Protocol.h>

@class NSString, NSUUID;

@interface REMDAHashtagTombstone : NSObject <REMDAChangedIdentifierResult>
{
    NSUUID *_objectIdentifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSUUID *_reminderIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006a12f
@property(retain, nonatomic) NSUUID *reminderIdentifier; // @synthesize reminderIdentifier=_reminderIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSUUID *objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
