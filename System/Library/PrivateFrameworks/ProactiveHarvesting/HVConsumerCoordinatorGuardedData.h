//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HVBudget, NSMapTable;

@interface HVConsumerCoordinatorGuardedData : NSObject
{
    HVBudget *_budget;	// 8 = 0x8
    NSMapTable *_mailConsumers;	// 16 = 0x10
    NSMapTable *_messagesConsumers;	// 24 = 0x18
    NSMapTable *_newsConsumers;	// 32 = 0x20
    NSMapTable *_notesConsumers;	// 40 = 0x28
    NSMapTable *_parsecConsumers;	// 48 = 0x30
    NSMapTable *_photosConsumers;	// 56 = 0x38
    NSMapTable *_remindersConsumers;	// 64 = 0x40
    NSMapTable *_safariConsumers;	// 72 = 0x48
    NSMapTable *_siriConsumers;	// 80 = 0x50
    NSMapTable *_thirdPartyAppConsumers;	// 88 = 0x58
    NSMapTable *_interactionConsumers;	// 96 = 0x60
    NSMapTable *_userActivityConsumers;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000000bcbd
- (id)init;	// IMP=0x000000000000bc67

@end
