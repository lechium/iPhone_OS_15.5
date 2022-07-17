//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSProgressPublisher-Protocol.h>

@class NSFileAccessNode, NSProgressValues, NSString, NSXPCConnection;
@protocol NSProgressPublisher;

__attribute__((visibility("hidden")))
@interface NSProgressPublisherProxy : NSObject <NSProgressPublisher>
{
    id <NSProgressPublisher> _forwarder;	// 8 = 0x8
    id _publisherID;	// 16 = 0x10
    NSString *_lowerCaseCategoryName;	// 24 = 0x18
    NSFileAccessNode *_itemLocation;	// 32 = 0x20
    NSXPCConnection *_connection;	// 40 = 0x28
    NSProgressValues *_values;	// 48 = 0x30
}

@property(readonly, copy) NSProgressValues *values; // @synthesize values=_values;
@property(copy) NSString *category; // @synthesize category=_lowerCaseCategoryName;
- (void)observeValues:(id)arg1 forKeys:(id)arg2;	// IMP=0x00000000000023bf
- (void)observeUserInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000002368
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndenting:(id)arg1;	// IMP=0x00000000000022c7
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(_Bool)arg2;	// IMP=0x00000000000022b1
- (oneway void)prioritize;	// IMP=0x000000000000229b
- (oneway void)resume;	// IMP=0x0000000000002285
- (oneway void)pause;	// IMP=0x000000000000226f
- (oneway void)cancel;	// IMP=0x0000000000002259
@property NSFileAccessNode *itemLocation;
- (_Bool)isFromConnection:(id)arg1;	// IMP=0x0000000000002235
- (id)publisherID;	// IMP=0x000000000000211b
- (void)dealloc;	// IMP=0x0000000000002099
- (id)initWithForwarder:(id)arg1 onConnection:(id)arg2 publisherID:(id)arg3 values:(id)arg4;	// IMP=0x0000000000001fe0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
