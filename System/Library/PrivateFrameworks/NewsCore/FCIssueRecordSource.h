//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FCIssueRecordSource
{
}

+ (id)_URLStringForCoverImageKey:(id)arg1 inRecord:(id)arg2;	// IMP=0x0000000000018bcc
+ (_Bool)_useTaggedImages;	// IMP=0x0000000000018bc2
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;	// IMP=0x0000000000018014
- (id)recordIDPrefixes;	// IMP=0x0000000000018007
- (unsigned long long)highThresholdDataSizeLimit;	// IMP=0x0000000000017ffc
- (unsigned long long)lowThresholdDataSizeLimit;	// IMP=0x0000000000017ff1
- (unsigned long long)storeVersion;	// IMP=0x0000000000017fe6
- (id)storeFilename;	// IMP=0x0000000000017fd9
- (id)alwaysLocalizedKeys;	// IMP=0x0000000000017f55
- (id)localizableKeys;	// IMP=0x0000000000017f48
- (id)nonLocalizableKeys;	// IMP=0x0000000000017bc5
- (int)pbRecordType;	// IMP=0x0000000000017bba
- (id)recordType;	// IMP=0x0000000000017ba6

@end

