//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDRetainedSearchMetadata, NSString;

@interface GEORetainedSearchMetadata : NSObject <NSCopying>
{
    GEOPDRetainedSearchMetadata *_retainedSearchMetadata;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c4ef3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c4eeae
- (id)_retainedSearchMetadata;	// IMP=0x0000000000c4eea0
@property(readonly, nonatomic, getter=_query) NSString *query;
- (id)initWithRetainedSearchMetadata:(id)arg1;	// IMP=0x0000000000c4edee

@end

