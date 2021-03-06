//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDMMCSItemReaderWriterProtocol-Protocol.h>

@class CKDMMCSItem, CKDMMCSItemGroupContext, NSString;

@interface CKDMMCSClientProxyItemReader : NSObject <CKDMMCSItemReaderWriterProtocol>
{
    CKDMMCSItemGroupContext *_MMCSRequest;	// 8 = 0x8
    CKDMMCSItem *_MMCSItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000101e05
@property(retain, nonatomic) CKDMMCSItem *MMCSItem; // @synthesize MMCSItem=_MMCSItem;
@property(retain, nonatomic) CKDMMCSItemGroupContext *MMCSRequest; // @synthesize MMCSRequest=_MMCSRequest;
- (_Bool)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x0000000000101d12
- (_Bool)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x0000000000101a1e
- (id)getFileMetadataWithError:(id *)arg1;	// IMP=0x00000000001018e6
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x00000000001018de
- (_Bool)openWithError:(id *)arg1;	// IMP=0x00000000001018d6
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;	// IMP=0x000000000010175a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

