//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMTreeWalker
{
}

- (id)nextNode;	// IMP=0x00000000000986e0
- (id)previousNode;	// IMP=0x0000000000098580
- (id)nextSibling;	// IMP=0x0000000000098420
- (id)previousSibling;	// IMP=0x00000000000982c0
- (id)lastChild;	// IMP=0x0000000000098160
- (id)firstChild;	// IMP=0x0000000000098000
- (id)parentNode;	// IMP=0x0000000000097ea0
@property(retain) DOMNode *currentNode;
@property(readonly) _Bool expandEntityReferences;
@property(readonly) id <DOMNodeFilter> filter;
@property(readonly) unsigned int whatToShow;
@property(readonly) DOMNode *root;
- (void)dealloc;	// IMP=0x0000000000097970

@end
