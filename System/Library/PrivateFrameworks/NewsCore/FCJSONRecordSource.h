//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCJSONRecordSourceType-Protocol.h>

@class FCJSONRecordSourceSchema, NSISO8601DateFormatter;

@interface FCJSONRecordSource <FCJSONRecordSourceType>
{
    FCJSONRecordSourceSchema *_schema;	// 8 = 0x8
    NSISO8601DateFormatter *_dateFormatter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001fc1c2
@property(copy, nonatomic) NSISO8601DateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(copy, nonatomic) FCJSONRecordSourceSchema *schema; // @synthesize schema=_schema;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;	// IMP=0x00000000001fb933
- (id)keyValueRepresentationOfRecord:(id)arg1;	// IMP=0x00000000001fb866
- (id)recordIDPrefixes;	// IMP=0x00000000001fb7b1
- (unsigned long long)highThresholdDataSizeLimit;	// IMP=0x00000000001fb7a6
- (unsigned long long)lowThresholdDataSizeLimit;	// IMP=0x00000000001fb79b
- (unsigned long long)storeVersion;	// IMP=0x00000000001fb790
- (id)storeFilename;	// IMP=0x00000000001fb6dc
- (id)alwaysLocalizedKeys;	// IMP=0x00000000001fb68c
- (id)localizableKeys;	// IMP=0x00000000001fb63c
- (id)nonLocalizableKeys;	// IMP=0x00000000001fb5ec
- (int)pbRecordType;	// IMP=0x00000000001fb5e1
- (id)recordType;	// IMP=0x00000000001fb591
- (void)fetchRecordsWithIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001fb4ff
- (void)fetchRecordsWithIDs:(id)arg1 cachePolicy:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fb251
- (id)initWithSchema:(id)arg1 contentDatabase:(id)arg2 contentDirectory:(id)arg3 experimentationSuffix:(id)arg4 activeTreatmentID:(id)arg5;	// IMP=0x00000000001fb174

@end

