//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURLSessionUploadTask;

@interface DEDSeedingUploadItem
{
    _Bool _completed;	// 8 = 0x8
    NSString *_extensionID;	// 16 = 0x10
    NSString *_filePromiseUUID;	// 24 = 0x18
    long long _bytesUploaded;	// 32 = 0x20
    long long _totalBytesExpectedToSend;	// 40 = 0x28
    NSURLSessionUploadTask *_uploadTask;	// 48 = 0x30
}

+ (id)itemAtPath:(id)arg1 enclosedFilename:(id)arg2 extensionID:(id)arg3;	// IMP=0x000000000006e3a6
- (void).cxx_destruct;	// IMP=0x000000000006e7c0
@property(retain) NSURLSessionUploadTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property _Bool completed; // @synthesize completed=_completed;
@property long long totalBytesExpectedToSend; // @synthesize totalBytesExpectedToSend=_totalBytesExpectedToSend;
@property long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property(retain) NSString *filePromiseUUID; // @synthesize filePromiseUUID=_filePromiseUUID;
@property(retain) NSString *extensionID; // @synthesize extensionID=_extensionID;
- (id)description;	// IMP=0x000000000006e611
- (id)publicDescription;	// IMP=0x000000000006e54a
- (id)promiseFilename;	// IMP=0x000000000006e538

@end

