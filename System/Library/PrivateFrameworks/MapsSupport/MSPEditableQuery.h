//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MSPContainer, NSString, _MSPQueryState;

@interface MSPEditableQuery
{
    _MSPQueryState *_editedState;	// 48 = 0x30
    MSPContainer *_container;	// 56 = 0x38
    NSString *_context;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000007455b
- (void)moveContentsObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x0000000000073fb6
- (void)deleteContentsObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000073cf5
- (void)deleteContentsObjectAtIndexes:(id)arg1;	// IMP=0x0000000000073909
- (void)_performEditWithStateTransformation:(CDUnknownBlockType)arg1 containerEdit:(CDUnknownBlockType)arg2;	// IMP=0x00000000000734f1
- (void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3;	// IMP=0x00000000000733f6
- (id)_visibleState;	// IMP=0x0000000000073365
- (id)_initWithSource:(id)arg1;	// IMP=0x0000000000073286

@end
