//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SAWLRemoveContentFromWatchList
{
}

+ (id)removeContentFromWatchListWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000030f0a
+ (id)removeContentFromWatchList;	// IMP=0x0000000000030ef8
- (_Bool)requiresResponse;	// IMP=0x0000000000030f7a
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *siriLocale;
@property(copy, nonatomic) NSString *canonicalId;
- (id)encodedClassName;	// IMP=0x0000000000030eeb
- (id)groupIdentifier;	// IMP=0x0000000000030ed7

@end

