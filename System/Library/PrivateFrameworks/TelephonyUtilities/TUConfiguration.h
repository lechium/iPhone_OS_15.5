//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUConfiguration-Protocol.h>

@class NSString, NSURL, TUDelegateController;
@protocol TUKeyValueDataSource><TUMutableKeyValueDataSource;

@interface TUConfiguration : NSObject <TUConfiguration>
{
    id <TUKeyValueDataSource><TUMutableKeyValueDataSource> _dataSource;	// 8 = 0x8
    TUDelegateController *_delegateController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e0bc4
@property(readonly, nonatomic) TUDelegateController *delegateController; // @synthesize delegateController=_delegateController;
@property(readonly, nonatomic) id <TUKeyValueDataSource><TUMutableKeyValueDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)removeDelegate:(id)arg1;	// IMP=0x00000000000e0b3e
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000e0ab8
- (id)numberForKey:(id)arg1;	// IMP=0x00000000000e09b8
@property(nonatomic) _Bool simulateFatalPersistentStoreError;
@property(retain, nonatomic) NSURL *conversationLinkBaseURL;
@property(retain, nonatomic) NSString *conversationLinkBaseURLString;
@property(nonatomic) unsigned long long announceCalls;
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000000e05b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
