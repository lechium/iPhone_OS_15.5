//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INMediaSearch, INPrivateSearchForMediaIntentData, NSArray;

@protocol INSearchForMediaIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INPrivateSearchForMediaIntentData *privateSearchForMediaIntentData;
@property(copy, nonatomic) INMediaSearch *mediaSearch;
@property(copy, nonatomic) NSArray *mediaItems;
- (id)init;
@end

