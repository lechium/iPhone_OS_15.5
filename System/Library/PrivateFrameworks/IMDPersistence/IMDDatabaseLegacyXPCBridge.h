//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMDDatabaseLegacyXPCBridge : NSObject
{
}

- (id)_codableDictionaryCopiedFromXPCDictionary:(id)arg1 objectClass:(Class)arg2;	// IMP=0x000000000003881e
- (id)_codableObjectsCopiedFromXPCArray:(id)arg1 objectClass:(Class)arg2;	// IMP=0x00000000000386e0
- (id)_messageRecordsCopiedFromXPCArray:(id)arg1;	// IMP=0x00000000000385bc
- (id)_chatRecordsCopiedFromXPCArray:(id)arg1;	// IMP=0x0000000000038599
- (id)_xpcDictionaryWithCodableObjects:(id)arg1;	// IMP=0x0000000000038498
- (id)_xpcArrayWithCodableObjects:(id)arg1;	// IMP=0x0000000000038316
- (id)_xpcArrayWithMessageRecords:(id)arg1;	// IMP=0x0000000000038192
- (id)_xpcArrayWithChatRecords:(id)arg1;	// IMP=0x0000000000038147

@end

