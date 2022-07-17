//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TemplateKit/TLKObservable-Protocol.h>
#import <TemplateKit/TLKObserver-Protocol.h>

@class NSString;
@protocol TLKObserver;

@interface TLKObject : NSObject <TLKObservable, TLKObserver>
{
    id <TLKObserver> observer;	// 8 = 0x8
    long long batchUpdateCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000017131
@property(nonatomic) long long batchUpdateCount; // @synthesize batchUpdateCount;
@property __weak id <TLKObserver> observer; // @synthesize observer;
- (void)propertiesDidChange;	// IMP=0x000000000001702d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
