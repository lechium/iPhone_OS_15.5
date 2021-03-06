//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol ENBusinessNoteStoreClientDelegate;

@interface ENBusinessNoteStoreClient
{
    id <ENBusinessNoteStoreClientDelegate> _delegate;	// 8 = 0x8
    NSString *_noteStoreUrl;	// 16 = 0x10
}

+ (id)noteStoreClientForBusiness;	// IMP=0x0000000000200357
- (void).cxx_destruct;	// IMP=0x000000000020004d
@property(copy, nonatomic) NSString *noteStoreUrl; // @synthesize noteStoreUrl=_noteStoreUrl;
@property(nonatomic) __weak id <ENBusinessNoteStoreClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)createBusinessNotebook:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fff50
- (void)createBusinessNotebook:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ffeb8
- (id)authenticationToken;	// IMP=0x00000000001ffdc8

@end

