//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HSUpdateRequest
{
    long long _connectionType;	// 8 = 0x8
}

+ (id)requestWithDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2 connectionType:(long long)arg3;	// IMP=0x00000000000176ab
- (id)_bodyDataForDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2;	// IMP=0x00000000000175ae
- (double)timeoutInterval;	// IMP=0x0000000000017526
- (_Bool)isConcurrent;	// IMP=0x00000000000174e5
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x0000000000017435
- (id)initWithDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2 connectionType:(long long)arg3;	// IMP=0x00000000000173a1

@end
