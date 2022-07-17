//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCOperation.h>

@class NSArray;
@protocol FCContentContext, FCReadablePrivateDataStorage;

@interface NTTodayModuleDescriptorsOperation : FCOperation
{
    _Bool _requireRefreshedAppConfig;	// 8 = 0x8
    NSArray *_contentRequests;	// 16 = 0x10
    id <FCContentContext> _contentContext;	// 24 = 0x18
    id <FCReadablePrivateDataStorage> _privateDataStorage;	// 32 = 0x20
    CDUnknownBlockType _descriptorsCompletion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000031d1d
@property(copy, nonatomic) CDUnknownBlockType descriptorsCompletion; // @synthesize descriptorsCompletion=_descriptorsCompletion;
@property(retain, nonatomic) id <FCReadablePrivateDataStorage> privateDataStorage; // @synthesize privateDataStorage=_privateDataStorage;
@property(nonatomic) _Bool requireRefreshedAppConfig; // @synthesize requireRefreshedAppConfig=_requireRefreshedAppConfig;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(copy, nonatomic) NSArray *contentRequests; // @synthesize contentRequests=_contentRequests;
- (id)init;	// IMP=0x0000000000031c40

@end
