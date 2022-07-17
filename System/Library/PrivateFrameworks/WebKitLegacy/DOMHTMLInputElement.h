//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMFileList, DOMHTMLFormElement, NSString, NSURL;

@interface DOMHTMLInputElement
{
}

- (void)setCanShowPlaceholder:(_Bool)arg1;	// IMP=0x0000000000064cf0
- (_Bool)canShowPlaceholder;	// IMP=0x0000000000064c10
- (void)insertTextSuggestion:(id)arg1;	// IMP=0x00000000000648b0
- (id)_autofillContext;	// IMP=0x0000000000064620
- (void)setValueForUser:(id)arg1;	// IMP=0x00000000000644e0
- (void)click;	// IMP=0x00000000000643f0
- (void)setSelectionRange:(int)arg1 end:(int)arg2;	// IMP=0x00000000000642d0
- (void)setRangeText:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3 selectionMode:(id)arg4;	// IMP=0x0000000000064090
- (void)setRangeText:(id)arg1;	// IMP=0x0000000000063ee0
- (void)select;	// IMP=0x0000000000063de0
- (void)setCustomValidity:(id)arg1;	// IMP=0x0000000000063c90
- (_Bool)checkValidity;	// IMP=0x0000000000063ba0
- (void)stepDown:(int)arg1;	// IMP=0x0000000000063a40
- (void)stepUp:(int)arg1;	// IMP=0x00000000000638e0
- (void)setCapture:(_Bool)arg1;	// IMP=0x00000000000637f0
- (_Bool)capture;	// IMP=0x00000000000636a0
@property(readonly, copy) NSURL *absoluteImageURL;
@property(readonly, copy) NSString *altDisplayString;
@property(copy) NSString *accessKey;
- (void)setIncremental:(_Bool)arg1;	// IMP=0x0000000000063060
- (_Bool)incremental;	// IMP=0x0000000000062f10
@property(copy) NSString *useMap;
@property(copy) NSString *align;
- (void)setSelectionDirection:(id)arg1;	// IMP=0x0000000000062910
- (id)selectionDirection;	// IMP=0x0000000000062810
@property int selectionEnd;
@property int selectionStart;
- (id)labels;	// IMP=0x00000000000622f0
- (id)validationMessage;	// IMP=0x00000000000621a0
@property(readonly) _Bool willValidate;
- (void)setWidth:(unsigned int)arg1;	// IMP=0x0000000000061fc0
- (unsigned int)width;	// IMP=0x0000000000061ed0
- (void)setValueAsNumber:(double)arg1;	// IMP=0x0000000000061d60
- (double)valueAsNumber;	// IMP=0x0000000000061c70
- (void)setValueAsDate:(double)arg1;	// IMP=0x0000000000061b00
- (double)valueAsDate;	// IMP=0x0000000000061a00
@property(copy) NSString *value;
@property(copy) NSString *defaultValue;
@property(copy) NSString *type;
- (void)setStep:(id)arg1;	// IMP=0x00000000000610f0
- (id)step;	// IMP=0x0000000000060fe0
@property(copy) NSString *src;
@property(copy) NSString *size;
- (void)setRequired:(_Bool)arg1;	// IMP=0x00000000000609b0
- (_Bool)required;	// IMP=0x0000000000060860
@property _Bool readOnly;
- (void)setPlaceholder:(id)arg1;	// IMP=0x00000000000604d0
- (id)placeholder;	// IMP=0x00000000000603c0
- (void)setPattern:(id)arg1;	// IMP=0x0000000000060270
- (id)pattern;	// IMP=0x0000000000060160
@property(copy) NSString *name;
@property _Bool multiple;
- (void)setMin:(id)arg1;	// IMP=0x000000000005faf0
- (id)min;	// IMP=0x000000000005f9e0
@property int maxLength;
- (void)setMax:(id)arg1;	// IMP=0x000000000005f650
- (id)max;	// IMP=0x000000000005f540
- (id)list;	// IMP=0x000000000005f400
@property _Bool indeterminate;
- (void)setHeight:(unsigned int)arg1;	// IMP=0x000000000005f140
- (unsigned int)height;	// IMP=0x000000000005f050
- (void)setFormTarget:(id)arg1;	// IMP=0x000000000005ef00
- (id)formTarget;	// IMP=0x000000000005edf0
- (void)setFormNoValidate:(_Bool)arg1;	// IMP=0x000000000005ed00
- (_Bool)formNoValidate;	// IMP=0x000000000005ebb0
- (void)setFormMethod:(id)arg1;	// IMP=0x000000000005ea70
- (id)formMethod;	// IMP=0x000000000005e920
- (void)setFormEnctype:(id)arg1;	// IMP=0x000000000005e7e0
- (id)formEnctype;	// IMP=0x000000000005e690
- (void)setFormAction:(id)arg1;	// IMP=0x000000000005e540
- (id)formAction;	// IMP=0x000000000005e3f0
@property(retain) DOMFileList *files;
@property(readonly) DOMHTMLFormElement *form;
@property _Bool disabled;
- (void)setDirName:(id)arg1;	// IMP=0x000000000005dbe0
- (id)dirName;	// IMP=0x000000000005dad0
@property _Bool checked;
@property _Bool defaultChecked;
@property _Bool autofocus;
- (void)setAutocomplete:(id)arg1;	// IMP=0x000000000005d350
- (id)autocomplete;	// IMP=0x000000000005d200
@property(copy) NSString *alt;
@property(copy) NSString *accept;
- (_Bool)_isTextField;	// IMP=0x00000000000432e0
- (_Bool)_isEdited;	// IMP=0x0000000000043370
- (int)_autocapitalizeType;	// IMP=0x00000000000433d0
- (void)setValueAsNumberWithChangeEvent:(double)arg1;	// IMP=0x00000000000435e0
- (void)setValueWithChangeEvent:(id)arg1;	// IMP=0x0000000000043450
- (int)structuralComplexityContribution;	// IMP=0x000000000009ade0
- (void)_setAutoFilledAndViewable:(_Bool)arg1;	// IMP=0x000000000009fab0
- (void)_setAutofilled:(_Bool)arg1;	// IMP=0x000000000009fa80
- (_Bool)_isAutoFilledAndViewable;	// IMP=0x000000000009fa60
- (_Bool)_isAutofilled;	// IMP=0x000000000009fa40
- (id)endPosition;	// IMP=0x000000000013a3d0
- (id)startPosition;	// IMP=0x000000000013a250

@end
