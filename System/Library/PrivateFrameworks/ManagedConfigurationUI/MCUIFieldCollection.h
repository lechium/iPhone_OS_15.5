//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCUIPayloadUserInputField, NSMutableArray;

@interface MCUIFieldCollection : NSObject
{
    NSMutableArray *_payloadFieldArrays;	// 8 = 0x8
    long long _currentPayloadIndex;	// 16 = 0x10
    long long _currentFieldIndex;	// 24 = 0x18
    MCUIPayloadUserInputField *_currentField;	// 32 = 0x20
    _Bool _isFinalField;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001d245
- (long long)currentPayloadIndex;	// IMP=0x000000000001d23b
- (id)responseDictionariesForCurrentPayload;	// IMP=0x000000000001d032
- (_Bool)currentFieldIsSinglePasswordField;	// IMP=0x000000000001cfc9
- (_Bool)currentFieldIsFinalField;	// IMP=0x000000000001cfc0
- (_Bool)currentFieldIsLastInPayload;	// IMP=0x000000000001cf45
- (void)restartCurrentPayload;	// IMP=0x000000000001cf2b
- (void)moveToNextField;	// IMP=0x000000000001ce6f
- (void)_setCurrentFieldToCurrentIndices;	// IMP=0x000000000001cda8
- (void)_setIsFinalField;	// IMP=0x000000000001ccf3
- (id)currentField;	// IMP=0x000000000001cce5
- (id)userInputResponses;	// IMP=0x000000000001c9bc
- (id)initWithUserInput:(id)arg1;	// IMP=0x000000000001c60f

@end

