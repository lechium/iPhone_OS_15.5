//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface SANoteSearch
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000f43a
+ (id)search;	// IMP=0x000000000000f428
- (_Bool)requiresResponse;	// IMP=0x000000000000f4aa
@property(copy, nonatomic) NSDate *toDate;
@property(copy, nonatomic) NSDate *fromDate;
@property(copy, nonatomic) NSString *contentQuery;
- (id)encodedClassName;	// IMP=0x000000000000f41b
- (id)groupIdentifier;	// IMP=0x000000000000f407

@end
