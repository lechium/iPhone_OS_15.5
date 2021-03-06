//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface NTKAppleEncryptedArchiveVerificationHandle
{
    struct AAArchiveStream_impl *_archiveStream;	// 64 = 0x40
    struct AAArchiveStream_impl *_verificationStream;	// 72 = 0x48
    NSURL *_outputDirectoryURL;	// 80 = 0x50
    struct AAFieldKeySet_impl *_excludeFields;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000266af4
- (_Bool)closeReturningError:(id *)arg1;	// IMP=0x00000000002669f7
- (struct AAArchiveStream_impl *)openReturningError:(id *)arg1;	// IMP=0x0000000000266864
@property(readonly) struct AAArchiveStream_impl *verificationStream;
@property(readonly) struct AAArchiveStream_impl *archiveStream;
- (void)dealloc;	// IMP=0x00000000002667f1
- (id)initWithArchiveURL:(id)arg1 symmetricKey:(id)arg2 outputDirectoryURL:(id)arg3 excludeFields:(id)arg4;	// IMP=0x00000000002666c8

@end

