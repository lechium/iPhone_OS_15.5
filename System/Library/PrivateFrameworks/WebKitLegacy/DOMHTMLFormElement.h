//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMHTMLCollection, NSString;

@interface DOMHTMLFormElement
{
}

- (_Bool)checkValidity;	// IMP=0x0000000000054d40
- (void)reset;	// IMP=0x0000000000054c50
- (void)submit;	// IMP=0x0000000000054b60
@property(readonly) int length;
@property(readonly) DOMHTMLCollection *elements;
@property(copy) NSString *target;
- (void)setNoValidate:(_Bool)arg1;	// IMP=0x00000000000545c0
- (_Bool)noValidate;	// IMP=0x0000000000054470
@property(copy) NSString *name;
@property(copy) NSString *method;
@property(copy) NSString *encoding;
@property(copy) NSString *enctype;
- (void)setAutocomplete:(id)arg1;	// IMP=0x00000000000538d0
- (id)autocomplete;	// IMP=0x00000000000537d0
@property(copy) NSString *action;
@property(copy) NSString *acceptCharset;
- (int)structuralComplexityContribution;	// IMP=0x000000000009ad80

@end

