// WARNING
// This file has been generated automatically by Rider IDE to
// mirror C# types. Changes in this file made by drag-connecting
// from the UI designer will be synchronized back to C#, but
// more complex manual changes may not transfer correctly.


#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>


@interface ViewController : NSViewController {
	NSTextFieldCell *_actualTemp;
	NSTextField *_airCriteria;
	NSTextField *_airCriteriaIntepretation;
	NSTextField *_choiceCity;
	NSTextField *_dateTomorrow;
	NSTextField *_description;
	NSTextField *_errorCity;
	NSTextField *_midday;
	NSTextField *_midnight;
	NSTextField *_nineAM;
	NSTextField *_ninePM;
	NSTextField *_pressure;
	NSTextField *_pressureInterpretation;
	NSTextField *_sixAM;
	NSTextField *_sixPM;
	NSTextField *_sunriseTime;
	NSTextField *_sunsetTime;
	NSTextField *_threeAM;
	NSTextField *_threePM;
	NSTextField *_windSpeed;
	NSTextField *_windSpeedIntepretation;
    NSImageView *iconOne;
}

@property (nonatomic, retain) IBOutlet NSTextFieldCell *actualTemp;

@property (nonatomic, retain) IBOutlet NSTextField *airCriteria;

@property (nonatomic, retain) IBOutlet NSTextField *airCriteriaIntepretation;

@property (nonatomic, retain) IBOutlet NSTextField *choiceCity;

@property (nonatomic, retain) IBOutlet NSTextField *dateTomorrow;

@property (nonatomic, retain) IBOutlet NSTextField *description;

@property (nonatomic, retain) IBOutlet NSTextField *errorCity;

@property (nonatomic, retain) IBOutlet NSTextField *midday;

@property (nonatomic, retain) IBOutlet NSTextField *midnight;

@property (nonatomic, retain) IBOutlet NSTextField *nineAM;

@property (nonatomic, retain) IBOutlet NSTextField *ninePM;

@property (nonatomic, retain) IBOutlet NSTextField *pressure;

@property (nonatomic, retain) IBOutlet NSTextField *pressureInterpretation;

@property (nonatomic, retain) IBOutlet NSTextField *sixAM;

@property (nonatomic, retain) IBOutlet NSTextField *sixPM;

@property (nonatomic, retain) IBOutlet NSTextField *sunriseTime;

@property (nonatomic, retain) IBOutlet NSTextField *sunsetTime;

@property (nonatomic, retain) IBOutlet NSTextField *threeAM;

@property (nonatomic, retain) IBOutlet NSTextField *threePM;

@property (nonatomic, retain) IBOutlet NSTextField *windSpeed;

@property (nonatomic, retain) IBOutlet NSTextField *windSpeedIntepretation;

- (IBAction)FindInformation:(NSButton *)sender;

@end
