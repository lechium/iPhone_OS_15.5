//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSData, NSString, NSURL;

@interface SAWLWatchListChannelDetails <SAAceSerializable>
{
}

+ (id)watchListChannelDetailsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000071ae
+ (id)watchListChannelDetails;	// IMP=0x000000000000719c
@property(copy, nonatomic) NSURL *appStoreURL;
@property(copy, nonatomic) NSString *appName;
@property(copy, nonatomic) NSData *appIconDynamicImage;
- (id)encodedClassName;	// IMP=0x000000000000718f
- (id)groupIdentifier;	// IMP=0x000000000000717b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

