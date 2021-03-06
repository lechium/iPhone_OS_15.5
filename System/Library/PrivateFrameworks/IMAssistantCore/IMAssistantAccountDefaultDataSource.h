//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMAssistantCore/IMAssistantAccountDataSource-Protocol.h>

@class NSString;

@interface IMAssistantAccountDefaultDataSource : NSObject <IMAssistantAccountDataSource>
{
}

+ (id)sharedInstance;	// IMP=0x000000000001c0fc
- (id)countryCode;	// IMP=0x000000000001c07b
- (id)imHandleWithID:(id)arg1;	// IMP=0x000000000001bfd6
- (_Bool)hasMessagingAccount;	// IMP=0x000000000001bf6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

