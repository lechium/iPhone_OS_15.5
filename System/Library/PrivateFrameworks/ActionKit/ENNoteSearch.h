//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ENNoteSearch : NSObject
{
    NSString *_searchString;	// 8 = 0x8
}

+ (id)noteSearchCreatedByThisApplication;	// IMP=0x00000000002d218f
+ (id)noteSearchWithSearchString:(id)arg1;	// IMP=0x00000000002d2142
- (void).cxx_destruct;	// IMP=0x00000000002d2132
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (id)initWithSearchString:(id)arg1;	// IMP=0x00000000002d2067
- (id)init;	// IMP=0x00000000002d204e

@end

