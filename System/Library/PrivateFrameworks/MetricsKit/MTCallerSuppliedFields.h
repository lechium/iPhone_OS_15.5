//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface MTCallerSuppliedFields : NSObject
{
    NSArray *_eventData;	// 8 = 0x8
    NSDictionary *_cachedMergedFields;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000026229
@property(retain, nonatomic) NSDictionary *cachedMergedFields; // @synthesize cachedMergedFields=_cachedMergedFields;
@property(retain, nonatomic) NSArray *eventData; // @synthesize eventData=_eventData;
- (id)mergedFields;	// IMP=0x0000000000025fbb
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000025fa9
- (id)valueForCallerSuppliedField:(id)arg1;	// IMP=0x0000000000025e37
- (id)initWithPageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3 eventData:(id)arg4;	// IMP=0x0000000000025c62
- (id)initWithEventData:(id)arg1;	// IMP=0x0000000000025bc0

@end

