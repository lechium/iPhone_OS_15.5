//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSString;

@interface FCFeedTransformationIdentity : NSObject <FCFeedTransforming>
{
}

+ (id)sharedInstance;	// IMP=0x00000000001bc260
- (id)transformFeedItems:(id)arg1;	// IMP=0x00000000001bc2b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
