//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordZoneID, NSArray, NSError, NSString, SyncDebugDataSource;

__attribute__((visibility("hidden")))
@interface SyncDebugZone : NSObject
{
    CKRecordZoneID *_zoneID;	// 8 = 0x8
    _Bool _zoneWidePCS;	// 16 = 0x10
    NSString *_recordType;	// 24 = 0x18
    CDUnknownBlockType _descriptionHandler;	// 32 = 0x20
    SyncDebugDataSource *_owner;	// 40 = 0x28
    _Bool _fetching;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
    NSArray *_records;	// 64 = 0x40
    NSError *_latestSelectableRecordsFetchError;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000005aa423
@property(readonly, nonatomic, getter=isFetching) _Bool fetching; // @synthesize fetching=_fetching;
@property(readonly, nonatomic) NSError *latestSelectableRecordsFetchError; // @synthesize latestSelectableRecordsFetchError=_latestSelectableRecordsFetchError;
@property(readonly, nonatomic) NSArray *records; // @synthesize records=_records;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_didSelectRecord:(id)arg1;	// IMP=0x00100000005aa3a0
- (void)select;	// IMP=0x00100000005aa36a
- (void)refresh;	// IMP=0x00100000005a9794
- (id)initWithZoneName:(id)arg1 usesZoneWidePCS:(_Bool)arg2 title:(id)arg3 contentsDescriptionHandler:(CDUnknownBlockType)arg4 owner:(id)arg5;	// IMP=0x00100000005a9658

@end

