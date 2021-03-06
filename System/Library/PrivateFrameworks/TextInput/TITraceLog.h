//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TITraceLog : NSObject
{
    NSMutableDictionary *_recordEntryCache;	// 8 = 0x8
    NSString *_logContents;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000241c0
@property(readonly, nonatomic) NSString *logContents; // @synthesize logContents=_logContents;
@property(retain, nonatomic) NSMutableDictionary *recordEntryCache; // @synthesize recordEntryCache=_recordEntryCache;
- (void)enumerateTextRecordEntriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023f2f
- (void)enumerateRecordsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023d8b
- (id)recordStringMatchingTypologyRecord:(id)arg1;	// IMP=0x0000000000023d29
- (id)recordMatchingTypologyRecord:(id)arg1;	// IMP=0x0000000000023c75
- (id)recordStringMatchingUUID:(id)arg1;	// IMP=0x0000000000023bf2
- (id)recordMatchingUUID:(id)arg1;	// IMP=0x0000000000023b6e
- (id)initWithLogContents:(id)arg1;	// IMP=0x0000000000023afb

@end

