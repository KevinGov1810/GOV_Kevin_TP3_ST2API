#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wtypedef-redefinition"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"
#pragma clang diagnostic ignored "-Wunguarded-availability-new"
#include <stdarg.h>
#include <objc/objc.h>
#include <objc/runtime.h>
#include <objc/message.h>
#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <WebKit/WebKit.h>
#import <CoreImage/CoreImage.h>
#import <CoreImage/CIFilterBuiltins.h>
#import <QuartzCore/QuartzCore.h>
#import <AppKit/AppKit.h>
#import <CoreGraphics/CoreGraphics.h>

@class WebFrameLoadDelegate;
@class CoreImage_CIColorCrossPolynomial;
@class CoreImage_CIColorPolynomial;
@class __monomac_internal_ActionDispatcher;
@class __MonoMac_NSAlertDidEndDispatcher;
@class NSApplicationDelegate;
@class NSPageControllerDelegate;
@class NSTableViewSource;
@class NSToolbarDelegate;
@class Foundation_NSDispatcher;
@class __MonoMac_NSSynchronizationContextDispatcher;
@class __Xamarin_NSTimerActionDispatcher;
@class Foundation_NSAsyncDispatcher;
@class __MonoMac_NSAsyncActionDispatcher;
@class __MonoMac_NSAsyncSynchronizationContextDispatcher;
@class Foundation_InternalNSNotificationHandler;
@class WebKit_WebView__WebFrameLoadDelegate;
@class WebKit_WebView__WebPolicyDelegate;
@class AppKit_NSTableView__NSTableViewDelegate;
@class __NSGestureRecognizerToken;
@class __NSGestureRecognizerParameterlessToken;
@class __NSGestureRecognizerParametrizedToken;
@class AppKit_NSGestureRecognizer__NSGestureRecognizerDelegate;
@class __NSClickGestureRecognizer;
@class __NSMagnificationGestureRecognizer;
@class __NSPanGestureRecognizer;
@class __NSPressGestureRecognizer;
@class __NSRotationGestureRecognizer;
@class AppKit_NSTextField__NSTextFieldDelegate;
@class AppKit_NSWindow__NSWindowDelegate;
@class AppKit_NSDatePicker__NSDatePickerCellDelegate;
@class AppKit_NSPageController__NSPageControllerDelegate;
@class AppKit_NSSearchField__NSSearchFieldDelegate;
@class AppKit_NSToolbar__NSToolbarDelegate;
@class __NSObject_Disposer;
@class Xamarin_Forms_Platform_macOS_Controls_FormsBoxView;
@class Xamarin_Forms_Platform_macOS_Controls_FormsNSSlider;
@class Xamarin_Forms_Platform_MacOS_FormsNSDatePicker;
@class Xamarin_Forms_Platform_MacOS_FormsApplicationDelegate;
@class Xamarin_Forms_Platform_MacOS_PlatformRenderer;
@class Xamarin_Forms_Platform_MacOS_FlippedClipView;
@class Xamarin_Forms_Platform_MacOS_FlyoutPageRenderer;
@class Xamarin_Forms_Platform_MacOS_MasterDetailPageRenderer;
@class Xamarin_Forms_Platform_MacOS_FormsNSView;
@class Xamarin_Forms_Platform_MacOS_PageRenderer;
@class Xamarin_Forms_Platform_MacOS_VisualElementRenderer_1;
@class Xamarin_Forms_Platform_MacOS_DefaultRenderer;
@class Xamarin_Forms_Platform_MacOS_ViewRenderer_2;
@class Xamarin_Forms_Platform_MacOS_BoxViewRenderer;
@class Xamarin_Forms_Platform_MacOS_ScrollViewRenderer;
@class Xamarin_Forms_Platform_MacOS_ActivityIndicatorRenderer;
@class Xamarin_Forms_Platform_MacOS_DatePickerRenderer;
@class Xamarin_Forms_Platform_MacOS_FrameRenderer;
@class Xamarin_Forms_Platform_MacOS_FormsNSImageView;
@class Xamarin_Forms_Platform_MacOS_OpenGLViewRenderer;
@class Xamarin_Forms_Platform_MacOS_MacOSOpenGLView;
@class Xamarin_Forms_Platform_MacOS_PickerRenderer;
@class Xamarin_Forms_Platform_MacOS_ProgressBarRenderer;
@class Xamarin_Forms_Platform_MacOS_SearchBarRenderer;
@class Xamarin_Forms_Platform_MacOS_FormsSliderCell;
@class Xamarin_Forms_Platform_MacOS_SliderRenderer;
@class Xamarin_Forms_Platform_MacOS_StepperRenderer;
@class Xamarin_Forms_Platform_MacOS_CheckBoxRenderer;
@class Xamarin_Forms_Platform_MacOS_SwitchRenderer;
@class Xamarin_Forms_Platform_MacOS_TimePickerRenderer;
@class Xamarin_Forms_Platform_MacOS_CellNSView;
@class Xamarin_Forms_Platform_MacOS_ViewCellNSView;
@class Xamarin_Forms_Platform_MacOS_ListViewDataSource;
@class Xamarin_Forms_Platform_MacOS_CustomNSTableHeaderView;
@class Xamarin_Forms_Platform_MacOS_FormsPageControllerDelegate;
@class Xamarin_Forms_Platform_MacOS_NavigationChildPageWrapper;
@class Xamarin_Forms_Platform_MacOS_NativeViewPropertyListener;
@class Xamarin_Forms_Platform_MacOS_LayoutRenderer;
@class Xamarin_Forms_Platform_MacOS_NSPageContainer;
@class Xamarin_Forms_Platform_MacOS_PageControllerDelegate;
@class Xamarin_Forms_Platform_MacOS_TableViewRenderer;
@class Xamarin_Forms_Platform_MacOS_TableViewDataSource;
@class Xamarin_Forms_Platform_MacOS_UnEvenTableViewModelRenderer;
@class Xamarin_Forms_Platform_MacOS_VerticallyCenteredTextFieldCell;
@class Xamarin_Forms_Platform_MacOS_NativeViewWrapperRenderer;
@class Xamarin_Forms_Platform_MacOS_LabelRenderer;
@class Xamarin_Forms_Platform_MacOS_ViewRenderer;
@class Xamarin_Forms_Platform_MacOS_ShapeRenderer_2;
@class Xamarin_Forms_Platform_MacOS_PathRenderer;
@class Xamarin_Forms_Platform_MacOS_ShapeView;
@class Xamarin_Forms_Platform_MacOS_PathView;
@class Xamarin_Forms_Platform_MacOS_EllipseRenderer;
@class Xamarin_Forms_Platform_MacOS_EllipseView;
@class Xamarin_Forms_Platform_MacOS_LineRenderer;
@class Xamarin_Forms_Platform_MacOS_LineView;
@class Xamarin_Forms_Platform_MacOS_PolygonRenderer;
@class Xamarin_Forms_Platform_MacOS_PolygonView;
@class Xamarin_Forms_Platform_MacOS_PolylineRenderer;
@class Xamarin_Forms_Platform_MacOS_PolylineView;
@class Xamarin_Forms_Platform_MacOS_RectangleRenderer;
@class Xamarin_Forms_Platform_MacOS_RectangleView;
@class Xamarin_Forms_Platform_MacOS_ShapeLayer;
@class Xamarin_Forms_Platform_MacOS_FlyoutPageRenderer_ViewControllerWrapper;
@class Xamarin_Forms_Platform_MacOS_ButtonRenderer;
@class Xamarin_Forms_Platform_MacOS_RadioButtonRenderer_FormsNSButton;
@class Xamarin_Forms_Platform_MacOS_RadioButtonRenderer;
@class Xamarin_Forms_Platform_MacOS_EntryRenderer_FormsNSTextField;
@class Xamarin_Forms_Platform_MacOS_EntryRenderer;
@class Xamarin_Forms_Platform_MacOS_EditorRenderer;
@class Xamarin_Forms_Platform_MacOS_ImageRenderer;
@class Xamarin_Forms_Platform_MacOS_WebViewRenderer_FormsWebFrameDelegate;
@class Xamarin_Forms_Platform_MacOS_WebViewRenderer;
@class Xamarin_Forms_Platform_MacOS_ListViewRenderer_FormsNSTableView;
@class Xamarin_Forms_Platform_MacOS_ListViewRenderer;
@class CarouselPageRenderer;
@class Xamarin_Forms_Platform_MacOS_TabbedPageRenderer;
@class Xamarin_Forms_Platform_MacOS_NavigationPageRenderer;
@class Xamarin_Forms_Platform_MacOS_NativeToolbarTracker_ToolBarItemNSButton;
@class Xamarin_Forms_Platform_MacOS_NativeToolbarTracker;
@class Xamarin_Forms_Platform_MacOS_ButtonRenderer_FormsNSButton_FormsNSButtonCell;
@class Xamarin_Forms_Platform_MacOS_ButtonRenderer_FormsNSButton;
@class AppDelegate;
@class ViewController;

@interface WebFrameLoadDelegate : NSObject<WebFrameLoadDelegate> {
}
	-(id) init;
@end

@interface CoreImage_CIColorCrossPolynomial : CIFilter<CIFilter, CIColorCrossPolynomial> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) setRedCoefficients:(CIVector *)p0;
	-(void) setGreenCoefficients:(CIVector *)p0;
	-(void) setBlueCoefficients:(CIVector *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface CoreImage_CIColorPolynomial : CoreImage_CIColorCrossPolynomial<CIFilter, CIColorPolynomial, CIFilter, CIColorCrossPolynomial> {
}
	-(void) setRedCoefficients:(CIVector *)p0;
	-(void) setGreenCoefficients:(CIVector *)p0;
	-(void) setBlueCoefficients:(CIVector *)p0;
	-(id) init;
@end

@interface NSApplicationDelegate : NSObject<NSApplicationDelegate> {
}
	-(id) init;
@end

@interface NSPageControllerDelegate : NSObject<NSPageControllerDelegate> {
}
	-(id) init;
@end

@interface NSTableViewSource : NSObject {
}
	-(id) init;
@end

@interface NSToolbarDelegate : NSObject<NSToolbarDelegate> {
}
	-(id) init;
@end

@interface __NSGestureRecognizerToken : NSObject {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface __NSGestureRecognizerParameterlessToken : __NSGestureRecognizerToken {
}
	-(void) target;
@end

@interface __NSGestureRecognizerParametrizedToken : __NSGestureRecognizerToken {
}
	-(void) target:(NSGestureRecognizer *)p0;
@end

@interface Xamarin_Forms_Platform_MacOS_FormsApplicationDelegate : NSObject<NSApplicationDelegate, NSApplicationDelegate> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) applicationDidFinishLaunching:(NSNotification *)p0;
	-(void) applicationDidBecomeActive:(NSNotification *)p0;
	-(void) applicationDidResignActive:(NSNotification *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_FlyoutPageRenderer : NSSplitViewController {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) viewWillAppear;
	-(CGRect) splitView:(NSSplitView *)p0 effectiveRect:(CGRect)p1 forDrawnRect:(CGRect)p2 ofDividerAtIndex:(NSInteger)p3;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_MasterDetailPageRenderer : Xamarin_Forms_Platform_MacOS_FlyoutPageRenderer {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_FormsNSView : NSView {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) updateLayer;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Xamarin_Forms_Platform_MacOS_PageRenderer : NSViewController {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) viewDidAppear;
	-(void) viewDidDisappear;
	-(void) viewWillAppear;
	-(void) viewDidLayout;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_VisualElementRenderer_1 : NSView {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) keyDown:(NSEvent *)p0;
	-(void) mouseDown:(NSEvent *)p0;
	-(void) rightMouseUp:(NSEvent *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ViewRenderer_2 : Xamarin_Forms_Platform_MacOS_VisualElementRenderer_1 {
}
	-(void) layout;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_BoxViewRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(void) layout;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ScrollViewRenderer : NSScrollView {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) layout;
	-(void) UpdateScrollPosition;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ActivityIndicatorRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_DatePickerRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_FrameRenderer : Xamarin_Forms_Platform_MacOS_VisualElementRenderer_1 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_MacOSOpenGLView : NSView {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_PickerRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ProgressBarRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_SearchBarRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_SliderRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(void) ValueChanged;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_StepperRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_CheckBoxRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_SwitchRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_TimePickerRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_TableViewRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_NativeViewWrapperRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(void) layout;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_LabelRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(void) layout;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ViewRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ShapeRenderer_2 : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_PathRenderer : Xamarin_Forms_Platform_MacOS_ShapeRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ShapeView : NSView {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) isFlipped;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_PathView : Xamarin_Forms_Platform_MacOS_ShapeView {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_EllipseRenderer : Xamarin_Forms_Platform_MacOS_ShapeRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_EllipseView : Xamarin_Forms_Platform_MacOS_ShapeView {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_LineRenderer : Xamarin_Forms_Platform_MacOS_ShapeRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_LineView : Xamarin_Forms_Platform_MacOS_ShapeView {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_PolygonRenderer : Xamarin_Forms_Platform_MacOS_ShapeRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_PolygonView : Xamarin_Forms_Platform_MacOS_ShapeView {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_PolylineRenderer : Xamarin_Forms_Platform_MacOS_ShapeRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_PolylineView : Xamarin_Forms_Platform_MacOS_ShapeView {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_RectangleRenderer : Xamarin_Forms_Platform_MacOS_ShapeRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_RectangleView : Xamarin_Forms_Platform_MacOS_ShapeView {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ShapeLayer : CALayer {
}
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) drawInContext:(id)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ButtonRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_RadioButtonRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(void) observeValueForKeyPath:(NSString *)p0 ofObject:(NSObject *)p1 change:(NSDictionary *)p2 context:(void *)p3;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_EntryRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(void) layout;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_EditorRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(void) layout;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ImageRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_WebViewRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2<WebPolicyDelegate> {
}
	-(void) webView:(WebView *)p0 decidePolicyForNavigationAction:(NSDictionary *)p1 request:(NSURLRequest *)p2 frame:(WebFrame *)p3 decisionListener:(id)p4;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_ListViewRenderer : Xamarin_Forms_Platform_MacOS_ViewRenderer_2 {
}
	-(void) viewWillDraw;
	-(void) viewDidChangeEffectiveAppearance;
	-(id) init;
@end

@interface CarouselPageRenderer : NSPageController {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(NSInteger) selectedIndex;
	-(void) setSelectedIndex:(NSInteger)p0;
	-(void) viewDidAppear;
	-(void) viewDidDisappear;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_TabbedPageRenderer : NSTabViewController {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) viewWillLayout;
	-(NSInteger) selectedTabViewItemIndex;
	-(void) setSelectedTabViewItemIndex:(NSInteger)p0;
	-(void) viewDidAppear;
	-(void) viewDidDisappear;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xamarin_Forms_Platform_MacOS_NavigationPageRenderer : NSViewController {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) viewDidDisappear;
	-(void) viewDidAppear;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface AppDelegate : NSObject<NSApplicationDelegate, NSApplicationDelegate> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) applicationDidFinishLaunching:(NSNotification *)p0;
	-(void) applicationWillTerminate:(NSNotification *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ViewController : NSViewController {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) viewDidLoad;
	-(BOOL) conformsToProtocol:(void *)p0;
@end


