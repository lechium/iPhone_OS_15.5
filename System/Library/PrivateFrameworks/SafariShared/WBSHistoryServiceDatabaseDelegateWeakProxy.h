//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryServiceDatabaseDelegate-Protocol.h>

@class NSString;
@protocol WBSHistoryServiceDatabaseDelegate;

@interface WBSHistoryServiceDatabaseDelegateWeakProxy : NSObject <WBSHistoryServiceDatabaseDelegate>
{
    id <WBSHistoryServiceDatabaseDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000130dce
- (void)handleEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000130d0a
- (void)reportSevereError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000130c8a
- (void)reportPermanentIDsForVisits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000130c08
- (void)reportPermanentIDsForItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000130b86
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000130b0b
- (id)init;	// IMP=0x0000000000130afd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

