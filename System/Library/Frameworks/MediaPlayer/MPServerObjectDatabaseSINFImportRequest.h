//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MPServerObjectDatabaseSINFImportRequest
{
    id _requestPayload;	// 48 = 0x30
    NSString *_hashedPersonID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000009a672
- (_Bool)performWithDatabaseOperations:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009a16a
- (id)initWithPayload:(id)arg1 requestPayload:(id)arg2 hashedPersonID:(id)arg3;	// IMP=0x000000000009a0c0

@end

