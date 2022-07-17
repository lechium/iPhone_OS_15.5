//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

#import <MediaPlayer/NSCoding-Protocol.h>
#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSObject-Protocol.h>

@class NSString;

@interface NSArray (MPMediaQueryAdditions) <NSObject, NSCoding, NSCopying>
- (_Bool)MPIsEmpty;	// IMP=0x00000000000bcf48
@property(readonly, nonatomic) NSString *itemIdentifier;
@property(readonly, nonatomic) NSString *sectionIdentifier;
@property(readonly, nonatomic) _Bool isQueryResultSetInvalidated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
