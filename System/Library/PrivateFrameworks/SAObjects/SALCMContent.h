//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface SALCMContent
{
}

+ (id)contentWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001c203
+ (id)content;	// IMP=0x000000000001c1f1
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSURL *externalId;
@property(copy, nonatomic) NSString *channelId;
@property(copy, nonatomic) NSString *canonicalId;
- (id)encodedClassName;	// IMP=0x000000000001c1e4
- (id)groupIdentifier;	// IMP=0x000000000001c1d0

@end

