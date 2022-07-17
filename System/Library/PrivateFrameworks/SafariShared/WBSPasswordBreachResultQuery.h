//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary;

@interface WBSPasswordBreachResultQuery : NSObject
{
    NSData *_persistentIdentifier;	// 8 = 0x8
    NSDate *_dateLastModified;	// 16 = 0x10
}

+ (id)dictionaryRepresentationsForResultQueries:(id)arg1;	// IMP=0x000000000016ccdf
+ (id)resultQueriesFromDictionaryRepresentations:(id)arg1;	// IMP=0x000000000016cc76
- (void).cxx_destruct;	// IMP=0x000000000016cd72
@property(readonly, nonatomic) NSDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(readonly, nonatomic) NSData *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
- (id)description;	// IMP=0x000000000016cd10
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000000016cad5
- (id)initWithPersistentIdentifier:(id)arg1 dateLastModified:(id)arg2;	// IMP=0x000000000016ca2d

@end
