//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface SANoteObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000f2b0
+ (id)object;	// IMP=0x000000000000f29e
@property(copy, nonatomic) NSString *title;
@property(nonatomic) _Bool restricted;
@property(copy, nonatomic) NSDate *lastModifiedDate;
@property(copy, nonatomic) NSDate *createdDate;
@property(copy, nonatomic) NSString *contents;
- (id)encodedClassName;	// IMP=0x000000000000f291
- (id)groupIdentifier;	// IMP=0x000000000000f27d

@end

